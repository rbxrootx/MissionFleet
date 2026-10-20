// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00560692 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00560692_00560692() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 15fh
        push 67b3c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B4 9B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        and eax, 10h
        neg eax
        sbb eax, eax
        and eax, 3
        add eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
