// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CE050 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_586ce050_586CE050() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 8D DE FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 0C 06 96 58: cmp edx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1E: jne 0x586ce0d7
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 78h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C 02 00 00: call 0x586ce2f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4B: jmp 0x586ce122
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC 32 0B 00: call 0x587813c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x32
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x586ce106
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 78h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 01 00 00: call 0x586ce2f0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586ce122
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 78h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F F9 FF FF: call 0x586cda60
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
