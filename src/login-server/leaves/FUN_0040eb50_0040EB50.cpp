// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EB50 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_0040eb50_0040EB50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43a222h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 3A 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 23 57 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 11 57 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 FF 56 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 ED 56 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 7B E9 FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 CD 56 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 BB 56 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 A9 56 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43d2a8h
        push 44dbech
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 0D F1 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbf0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 FA F0 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbf4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 E7 F0 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbf8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 D4 F0 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dbfch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 C1 F0 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dc00h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 AE F0 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        push 44dc04h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12ch
        ; Exact mapped bytes E8 9B F0 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
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
