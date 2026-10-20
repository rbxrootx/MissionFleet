// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E348 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_0041e348_0041E348() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 65 08 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 41 07 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 38 0A 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41e3a5
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x41e420
        __asm _emit 0xeb
        __asm _emit 0x7b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 A3 09 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5C: je 0x41e41e
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 C7 42 5C 00 00: mov word ptr [edx + 0x5c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 150h
        push eax
        push 5a143ch
        ; Exact mapped bytes E8 01 18 0B 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41e420
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 B6 A3 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
