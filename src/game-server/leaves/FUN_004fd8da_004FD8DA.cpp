// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD8DA .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_004fd8da_004FD8DA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e07fh
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 01 36 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 10h
        ; Exact mapped bytes E8 EF 35 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1ch
        ; Exact mapped bytes E8 E0 35 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 586a0ch
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4fd94e
        __asm _emit 0x75
        __asm _emit 0x14
        push 80h
        push 5ca304h
        ; Exact mapped bytes E8 B7 70 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd94e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4fd934
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax*4 + 4]
        push ecx
        ; Exact mapped bytes E8 56 FA FE FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2F: je 0x4fd9a9
        __asm _emit 0x74
        __asm _emit 0x2f
        push 4ed84ch
        push 530f07h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 4
        mov edx, dword ptr [ebp - 18h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 12 B1 FA FF: call 0x4a8ab0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        add eax, 4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x4fd9b0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 19 01 FF FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 10h
        ; Exact mapped bytes E8 0A 01 FF FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
