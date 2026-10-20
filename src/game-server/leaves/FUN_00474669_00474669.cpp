// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474669 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_00474669_00474669() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E 41 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x4746a6
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 7ch], eax
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4746a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 2D 41 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x41
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
