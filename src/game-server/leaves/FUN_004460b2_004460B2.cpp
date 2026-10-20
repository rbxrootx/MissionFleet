// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004460B2 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_004460b2_004460B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 60: je 0x446135
        __asm _emit 0x74
        __asm _emit 0x60
        push 5b6890h
        push 43fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 02 8B 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4460f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 19h
        ; Exact mapped bytes 7D 23: jge 0x446122
        __asm _emit 0x7d
        __asm _emit 0x23
        push 1
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 A3 02 00 00: call 0x4463b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 87 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E9 92 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB CE: jmp 0x4460f0
        __asm _emit 0xeb
        __asm _emit 0xce
        push 1
        push 0
        push 43eh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 8A 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x446147
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5b6898h
        push 43fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 8A 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        cmp dword ptr [eax + 90h], 0
        sete cl
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 90h], ecx
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 77 26 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x26
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
