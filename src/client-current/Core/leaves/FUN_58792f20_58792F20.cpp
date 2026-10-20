// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792F20 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_58792f20_58792F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58792f3b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 FA 52 CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x52
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 83 94 00 00 00: jae 0x58792fe3
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AC 4A CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AB 29 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x29
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 64: jne 0x58792fde
        __asm _emit 0x75
        __asm _emit 0x64
        mov edx, dword ptr [ebp - 8]
        add edx, 64h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 4A CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 6A 34 D5 FF: call 0x584e6400
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x34
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 41: jne 0x58792fde
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 8]
        add edx, 64h
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E 4A CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 47 7A FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 0ah]
        mov edx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes 75 19: jne 0x58792fde
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 36 4A CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 07: jmp 0x58792fe5
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x58792f32
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
