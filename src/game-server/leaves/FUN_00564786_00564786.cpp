// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564786 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00564786_00564786() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x5647bd
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 C6 E4 FC FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5C: je 0x56482d
        __asm _emit 0x74
        __asm _emit 0x5c
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 D0 E4 FC FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x5647fc
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 5d0bb4h
        ; Exact mapped bytes E8 09 02 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5647fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x5647e5
        __asm _emit 0x75
        __asm _emit 0xe3
        push 4ah
        push 5d0bb4h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4E 69 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        push 1
        push 363h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 51 CE F8 FF: call 0x4f167c
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 9E: jmp 0x5647cb
        __asm _emit 0xeb
        __asm _emit 0x9e
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
