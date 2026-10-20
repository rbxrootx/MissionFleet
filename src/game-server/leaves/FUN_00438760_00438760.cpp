// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438760 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_00438760_00438760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 114h]
        mov ecx, 45h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 114h], ecx
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax], 5812f8h
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 8], 1
        mov dword ptr [ebp - 108h], 0
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5b5b78h
        push 5b5b8ch
        lea edx, [ebp - 100h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        cmp esi, esp
        ; Exact mapped bytes E8 05 00 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x00
        push 0
        push 0
        lea eax, [ebp - 10ch]
        push eax
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes 8B 0D 00 78 5D 00: mov ecx, dword ptr [0x5d7800]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 9B FD FF: call 0x41230f
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        push 0
        mov edx, dword ptr [ebp - 10ch]
        push edx
        mov eax, dword ptr [ebp - 104h]
        push eax
        ; Exact mapped bytes 8B 0D 00 78 5D 00: mov ecx, dword ptr [0x5d7800]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 EA 9E FD FF: call 0x412703
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 CF 4B 0B 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 114h]
        pop edi
        pop esi
        add esp, 114h
        cmp ebp, esp
        ; Exact mapped bytes E8 8E FF 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
