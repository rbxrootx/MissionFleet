// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A2F0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_1002a2f0_1002A2F0() {
    __asm {
        mov eax, dword ptr [ecx + 54h]
        mov edx, dword ptr [esp + 4]
        cmp eax, edx
        ; Exact mapped bytes 7E 02: jle 0x1002a2fd
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, edx
        mov ecx, dword ptr [ecx + 70h]
        xor edx, edx
        test eax, eax
        setl dl
        dec edx
        mov dword ptr [ecx + 60h], 40000000h
        and edx, eax
        mov dword ptr [ecx + 5ch], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
