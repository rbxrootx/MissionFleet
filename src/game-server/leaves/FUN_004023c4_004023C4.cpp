// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004023C4 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_004023c4_004023C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d7ch]
        mov ecx, dword ptr [ecx + 24h]
        ; Exact mapped bytes E8 3F ED FF FF: call 0x40112d
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E3 63 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x63
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
