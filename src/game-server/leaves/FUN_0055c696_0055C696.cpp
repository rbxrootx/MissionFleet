// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055C696 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_0055c696_0055C696() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f694h
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 FC FF FF: call 0x55c38b
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 29 48 FD FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 589b1ch
        push 45eh
        push 5cebe0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 62 EA F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x55c71e
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x55c71e
        __asm _emit 0x75
        __asm _emit 0x14
        push 45fh
        push 5cebe0h
        ; Exact mapped bytes E8 E7 82 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55c71e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x55c6fe
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 9ch], edx
        push 0f08dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a0h
        ; Exact mapped bytes E8 31 E4 F9 FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe4
        __asm _emit 0xf9
        __asm _emit 0xff
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
