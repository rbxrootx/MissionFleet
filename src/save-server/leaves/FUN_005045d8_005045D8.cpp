// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005045D8 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_005045d8_005045D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0e2h
        push 677834h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 69 5C FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 20: je 0x50461d
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 74 1A: je 0x50461d
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 14: je 0x50461d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e3h
        push 677834h
        ; Exact mapped bytes E8 28 47 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50461d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x5045f7
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x50463a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 2A: jmp 0x504664
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 0B: jne 0x50464b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 19: jmp 0x504664
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 0E: jne 0x50465f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 05: jmp 0x504664
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 33: jmp 0x504697
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 0B: jge 0x504675
        __asm _emit 0x7d
        __asm _emit 0x0b
        push 0
        push -1
        push 9
        ; Exact mapped bytes E8 FB 61 FD FF: call 0x4da870
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], eax
        push 0f5h
        push 677834h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 CF 5B FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
