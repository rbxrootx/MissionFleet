// Exact table-driven legacy character scan primitive.
extern "C" __declspec(naked) void Recovered004BA090()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push esi
    __asm xor eax, eax
    __asm push eax
    __asm push eax
    __asm push eax
    __asm push eax
    __asm push eax
    __asm push eax
    __asm push eax
    __asm push eax
    __asm mov edx, dword ptr [ebp+12]
    __asm _emit 0x8d
    __asm _emit 0x49
    __asm _emit 0x00
    __asm set_loop:
    __asm mov al, byte ptr [edx]
    __asm or al, al
    __asm je set_done
    __asm inc edx
    __asm bts dword ptr [esp], eax
    __asm jmp short set_loop
    __asm set_done:
    __asm mov esi, dword ptr [ebp+8]
    __asm scan_loop:
    __asm mov al, byte ptr [esi]
    __asm or al, al
    __asm je cleanup
    __asm inc esi
    __asm bt dword ptr [esp], eax
    __asm jae scan_loop
    __asm lea eax, [esi-1]
    __asm cleanup:
    __asm add esp, 32
    __asm pop esi
    __asm leave
    __asm ret
}
