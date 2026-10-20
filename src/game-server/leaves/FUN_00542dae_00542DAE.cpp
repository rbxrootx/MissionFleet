// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542DAE .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_00542dae_00542DAE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cbd1h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 95h
        push 5c5db4h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 7E 83 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 14: je 0x542e02
        __asm _emit 0x74
        __asm _emit 0x14
        push 96h
        push 5c5db4h
        ; Exact mapped bytes E8 03 1C FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542e02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x542de2
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 70: je 0x542e7e
        __asm _emit 0x74
        __asm _emit 0x70
        push 20h
        ; Exact mapped bytes E8 AB A5 FA FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa5
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1F: je 0x542e47
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1eh
        mov eax, dword ptr [ebp + 8]
        push eax
        push 583264h
        push 58326ch
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 98 AA FB FF: call 0x4fd8da
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x542e4e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        push 0
        push 583248h
        push 583258h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CE 17 00 00: call 0x544660
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0b8h], eax
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
