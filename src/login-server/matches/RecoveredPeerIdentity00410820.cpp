// Exact recovered peer IPv4/port extractor at 0x00410820.
extern "C" void *ImportGetPeerName0043C5AC;
extern "C" void *ImportNtohs0043C5CC;
extern "C" void *ImportInetNtoa0043C5C8;
extern "C" void AssignPeerAddress0042DD34();

extern "C" __declspec(naked) void Recovered00410820()
{
    __asm sub esp, 14h
    __asm xor eax, eax
    __asm mov ecx, dword ptr [ecx+4]
    __asm mov dword ptr [esp+4], eax
    // Preserve the original non-minimal SIB encoding of lea edx,[esp+0].
    __asm _emit 08dh
    __asm _emit 054h
    __asm _emit 024h
    __asm _emit 000h
    __asm mov dword ptr [esp+8], eax
    __asm push esi
    __asm mov dword ptr [esp+10h], eax
    __asm push edx
    __asm mov dword ptr [esp+18h], eax
    __asm lea eax, dword ptr [esp+0ch]
    __asm push eax
    __asm push ecx
    __asm mov dword ptr [esp+10h], 10h
    __asm call dword ptr [ImportGetPeerName0043C5AC]
    __asm xor edx, edx
    __asm cmp eax, -1
    __asm setne dl
    __asm mov esi, edx
    __asm test esi, esi
    __asm je done
    __asm mov eax, dword ptr [esp+0ah]
    __asm push eax
    __asm call dword ptr [ImportNtohs0043C5CC]
    __asm mov ecx, dword ptr [esp+20h]
    __asm mov edx, dword ptr [esp+0ch]
    __asm and eax, 0ffffh
    __asm push edx
    __asm mov dword ptr [ecx], eax
    __asm call dword ptr [ImportInetNtoa0043C5C8]
    __asm mov ecx, dword ptr [esp+1ch]
    __asm push eax
    __asm call AssignPeerAddress0042DD34
done:
    __asm mov eax, esi
    __asm pop esi
    __asm add esp, 14h
    __asm ret 8
}
