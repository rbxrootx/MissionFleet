// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849EB00 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5849eb00_5849EB00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FE 27 FF FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10f4h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10f4h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
