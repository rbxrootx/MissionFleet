// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004453C4 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_004453c4_004453C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 5D: jne 0x445435
        __asm _emit 0x75
        __asm _emit 0x5d
        push 1
        push 445h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 94 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1B A0 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa0
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 444h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 94 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 05 A0 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6804h
        push 444h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 97 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1d8h
        ; Exact mapped bytes E8 E4 A2 0F 00: call 0x53f708
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1d8h
        ; Exact mapped bytes E8 27 A3 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x445487
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 4C: jne 0x445487
        __asm _emit 0x75
        __asm _emit 0x4c
        push 0
        push 445h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 94 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B8 9F 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        push 444h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 94 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A2 9F 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b680ch
        push 444h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 97 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 B0 65 04 00: call 0x48ba37
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4A 33 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x33
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
