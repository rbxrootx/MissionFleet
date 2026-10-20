// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D8A1 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_5883d8a1_5883D8A1() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x5883d8b0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6D: jmp 0x5883d91d
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5883d8ca
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 B3 4B 02 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 E5 36 01 00: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB 53: jmp 0x5883d91d
        __asm _emit 0xeb
        __asm _emit 0x53
        push edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 74 14: je 0x5883d8e6
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 72 0F: jb 0x5883d8e6
        __asm _emit 0x72
        __asm _emit 0x0f
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 B1 EF 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes EB 36: jmp 0x5883d91c
        __asm _emit 0xeb
        __asm _emit 0x36
        push dword ptr [ebp + 0ch]
        push 0
        push eax
        ; Exact mapped bytes E8 1F F5 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 09: jne 0x5883d901
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 72 4B 02 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        push 16h
        ; Exact mapped bytes EB 0C: jmp 0x5883d90d
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 73 13: jae 0x5883d919
        __asm _emit 0x73
        __asm _emit 0x13
        ; Exact mapped bytes E8 64 4B 02 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        push 22h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 96 36 01 00: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB 03: jmp 0x5883d91c
        __asm _emit 0xeb
        __asm _emit 0x03
        push 16h
        pop eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
