// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409170 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_00409170_00409170() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439ba5h
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
        ; Exact mapped bytes E8 E1 93 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 03 B1 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 F1 B0 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 118h
        ; Exact mapped bytes E8 7F 43 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 71 43 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 C3 B0 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 B1 B0 FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 43ca28h
        push 44dacch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 110h
        ; Exact mapped bytes E8 15 4B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dad0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 114h
        ; Exact mapped bytes E8 02 4B 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dad4h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 EF 4A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        push 44dad8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 DC 4A 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 6
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
