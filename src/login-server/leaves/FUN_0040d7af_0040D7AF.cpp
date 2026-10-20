// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D7AF .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_0040d7af_0040D7AF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 88 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0ch
        push 0ffh
        mov eax, dword ptr [ebp - 4]
        add eax, 120h
        push eax
        push 449664h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F6 7F 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 124h
        push edx
        push 44966ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D5 7F 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 128h
        push ecx
        push 449678h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 99 84 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 12ch
        push eax
        push 449680h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 82 84 00 00: call 0x415cb2
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov edx, dword ptr [ebp - 4]
        add edx, 130h
        push edx
        push 449690h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 85 7F 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 134h
        push ecx
        push 449698h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6B 85 00 00: call 0x415dd4
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 135h
        push eax
        push 4496a4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 54 85 00 00: call 0x415dd4
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 138h
        push edx
        push 4496b0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F9 82 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0ch
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        push ecx
        push 4496bch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 1D 7F 00 00: call 0x4157d6
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 140h
        push eax
        push 4496c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C1 82 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 144h
        push edx
        push 4496d4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A9 82 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 148h
        push ecx
        push 4496e0h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 91 82 00 00: call 0x415b91
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
