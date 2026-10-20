// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044EE72 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_0044ee72_0044EE72() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db4h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 20: jne 0x44eeaf
        __asm _emit 0x75
        __asm _emit 0x20
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0db4h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 33 99 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x44eec7
        __asm _emit 0xeb
        __asm _emit 0x18
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 19 99 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 FB 98 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0db4h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c7ch]
        mov ecx, dword ptr [eax + 40cc4h]
        mov dword ptr [ecx + 2ch], 0
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CD 98 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x98
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
