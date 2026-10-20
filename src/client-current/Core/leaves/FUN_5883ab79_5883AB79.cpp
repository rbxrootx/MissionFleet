// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AB79 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5883ab79_5883AB79() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push dword ptr [ebp + 8]
        mov esi, ecx
        and dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0fh
        mov byte ptr [esi], 0
        ; Exact mapped bytes E8 28 16 00 00: call 0x5883c1bd
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 A2 0C 00 00: call 0x5883b843
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
