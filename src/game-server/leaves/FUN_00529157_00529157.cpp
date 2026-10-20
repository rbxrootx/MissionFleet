// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529157 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_00529157_00529157() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ddc9h
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
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        mov ecx, 5de854h
        ; Exact mapped bytes E8 DE E1 01 00: call 0x547360
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 71 5C FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5c
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x52923e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 38 A4 FD FF: call 0x5035dd
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 24 2B 01 00: call 0x53bcd8
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 C7 82 FD FF: call 0x501484
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 50h]
        push ecx
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 CE 0C 01 00: call 0x539e9a
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5291e4
        __asm _emit 0x75
        __asm _emit 0x14
        push 1bch
        push 5c8f88h
        ; Exact mapped bytes E8 21 B8 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5291e4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x5291c0
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 8E 82 FD FF: call 0x501484
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 3ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 68h]
        cmp ecx, dword ptr [edx + 3ch]
        ; Exact mapped bytes 7E 0E: jle 0x52921e
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x529227
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 53 A4 FD FF: call 0x50368f
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x52924a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
