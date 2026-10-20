// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535BF5 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00535bf5_00535BF5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        neg eax
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 52 FD FF FF: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
