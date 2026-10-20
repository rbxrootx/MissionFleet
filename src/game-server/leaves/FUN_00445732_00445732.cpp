// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445732 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_00445732_00445732() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 6B: jne 0x4457b1
        __asm _emit 0x75
        __asm _emit 0x6b
        push 1
        push 412h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 91 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AD 9C 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 411h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 91 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 97 9C 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6854h
        push 411h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 94 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28ch
        ; Exact mapped bytes E8 76 9F 0F 00: call 0x53f708
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28ch
        ; Exact mapped bytes E8 B9 9F 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 A4 62 04 00: call 0x48ba53
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x445803
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 4C: jne 0x445803
        __asm _emit 0x75
        __asm _emit 0x4c
        push 0
        push 412h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 91 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3C 9C 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 411h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 91 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 26 9C 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b685ch
        push 411h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 93 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x93
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 34 62 04 00: call 0x48ba37
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CE 2F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2f
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
