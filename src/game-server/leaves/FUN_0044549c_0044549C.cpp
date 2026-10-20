// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044549C .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_0044549c_0044549C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 6B: jne 0x44551b
        __asm _emit 0x75
        __asm _emit 0x6b
        push 1
        push 44ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 94 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 43 9F 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 448h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 94 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2D 9F 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6818h
        push 448h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 96 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 214h
        ; Exact mapped bytes E8 0C A2 0F 00: call 0x53f708
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 214h
        ; Exact mapped bytes E8 4F A2 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 3A 65 04 00: call 0x48ba53
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x44556d
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 4C: jne 0x44556d
        __asm _emit 0x75
        __asm _emit 0x4c
        push 0
        push 44ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 93 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D2 9E 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 448h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 93 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BC 9E 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6820h
        push 448h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 96 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 CA 64 04 00: call 0x48ba37
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 64 32 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x32
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
