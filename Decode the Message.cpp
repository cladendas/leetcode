// 2325. Decode the Message

#include "libraries.cpp"

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> m;

        for (int i = 0, j = 'a'; i < key.size(); i++, j++)
        {
            if (!m.count(key[i]) && key[i] >= 'a' && key[i] <= 'z') {
                m[key[i]] = j;
            } else {
                j--;
            }
        }
        
        std::transform(message.begin(), message.end(), message.begin(), [&](char s){
            return s == ' ' ? ' ' : m[s];
        });

        return message;
    }
};

void test() {
    Solution s;
    
    // std::cout << s.decodeMessage("the quick brown fox jumps over the lazy dog", "vkbs bs t suepuv") << '\n';
    // std::cout << s.decodeMessage("abcdefghijklmnopqrstuvwxyz", "zztz") << '\n';
    auto result = s.decodeMessage("woffqdhn hoyscq zibrywhvtrgnmdpsb tdcoimskqkyymmxpbpfpmlsvhzjk tyolpnrbeqnaewyrnaiwciczimjfbf rpdolenlaigiofotcd y aenjtwosqqyjvjyu au ptjcqqbsyugaapwkzihjbplivpycp ovgwslthcnnyjbbbbmtnbyluybpvxxilnprcgjwlxcybwlhkw lvpionizmsnsciyjrs fekme xbhdmbskfgekgfnvrbngmzknqurqlhpkwj axbfyh lvqtxflumdvbfjlwzbqctwzkmzgubrgmctfvumijzkbdzvgcwqexkaeejcqavvcawwgdthdpfffpdzctzomuudgxttenmgfvfddjbnsfxrlcdwduogymudfqjwrlcf mlvrmbxrabmyefeinusul ygiwnrsqhif xnyvnofxijvovavxlmwvdamiap hkgyzkzxoyhhfkg awyfuysenafyarbyyntxhlvnpzwxuuoemwxyup kaedsqhggbzdhenli ffosi cz niffxmrftxsojvlpwvojxjwecxfygclr samacemzrwflulendyuqzq uqaiqf atiovg lhbgvkuwcdmzwkvtozcjg arujvnfsfoiur dfdbvps donvihkfnpzcauanlnksnikiibgoqpgiemlasdghcqytblieavnjzmorfgsprwtztrdtstbdwjxztplwqkfwcxqilrmqfhfmprhxfoijflefxxyqvewe nwahmperugtjiuwubpulficzijsnhwrhhtsinrjphjf txryrugcd ivtqmpiwinfisvjuirftqn ivnkmesmtykmuaqkrvaqrrsn", 
        "vwetfsmmjukmmlu abwipccxhehjj fvz gyvunnt fcxobcmguqrmvdsr kyd iotzfclgrplq nhgegxyattqa hy ayzpezgelfdfixotpetkzzdfqdbstlvbmyhzqphamxxqzpyipnackevsookjajxowoaxwtghxhxadnzgahuzuwgosoqqndnve caj zuqjotbjunnsylhdpqcmcqnwghrteaorpzpcfjotgoyuhwynoyldzyundamgtequlvbhguqcamyikdxgletjicwxfcrypzosphujpykrzsottlxookgyxuvaygwlihbjbtuwolllhbvelcssuahtwysvwumptgrcjnifvlyaqjmeabqyfyoczskfntgthvqapnqljntpnvafprvrbzhzln  rooponceb iuxoiu qliqtevutwvifsoyemyhnkboscymur vxeezvbopmoufoyh tjnpcmezqclsc vliamexsmctsbsnctkaxwhvbsglimpiim bteyvmfxppedxxplmvjztwarx punyudectqjktnpusfahq pufdvlzcpqlkqrxxrauygtwvmeszadl gdazmwxuglcelt  psaflockxkpawxo x kluzqcanbvvbq stnj uhmmxijrcnrogzeaipouoaqpznugvyrjiavbgqrofjrorzuzhgjvsaxvjkudrdmollwmyyjncjjouqecyeopotetfmkuvrvzmotxxeasxxcij qj weerkjnlaeuhqfbjbtsquuqowptciqzegbflndlcdni qjowaaycoanwbdqmvnfdilhvffvls qjfuygnretkh uzkulakgnncbkelropsgwtxwynqlezpdcvskbrzntodu fpgzveayqewsqrlvbcugvyw ol r qrjadxjeebcxubpverdqyuuqzcp nlerifggirgiohsjoevk mreqyrzyl cookcscseguikw avzibvrjaohyhag yvcrgfhdh pczqowdpfgfwkwbwii vaye rhcwkchyfuxcra rlsidglxcgxstq xcomnpunzb mrklupqnsojrbyhnclvpxmmrmz rsuzzcrmloeuk sfuieqxpmsmvvfkefabxuqcomeu ea fbztkaswzsloxamdbntejfcdhb exzdzaaszwbsabyyicyjntbsgwllzfwvmcscrvubqstyo ihqtmgthg");

    std::cout << result << '\n';
}