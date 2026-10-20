// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047177E .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0047177e_0047177E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 52ch]
        test ecx, ecx
        ; Exact mapped bytes 75 20: jne 0x4717bb
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 90 71 FF FF: call 0x46893a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 AA 8F FF FF: call 0x46a765
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 05 00 00: call 0x471d5b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 0B 70 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
