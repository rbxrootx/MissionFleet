// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872C640 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5872c640_5872C640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5872c6db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes 75 4C: jne 0x5872c6aa
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 83 D5 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x83
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 83 D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        mov dword ptr [ebp - 8], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 8001d001h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 02 10 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 31: jmp 0x5872c6db
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 26: jne 0x5872c6db
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 AA DA FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xaa
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 13 97 D5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x97
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
