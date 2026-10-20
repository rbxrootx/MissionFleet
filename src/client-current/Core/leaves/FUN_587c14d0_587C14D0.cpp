// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C14D0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_587c14d0_587C14D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 A0 D0 FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa0
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x587c157a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 14: jmp 0x587c151a
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 66 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x66
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 5ch]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7D 08: jge 0x587c1537
        __asm _emit 0x7d
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 02: je 0x587c1537
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB CF: jmp 0x587c1506
        __asm _emit 0xeb
        __asm _emit 0xcf
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3D: je 0x587c157a
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 74 1C: je 0x587c1567
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0E: jmp 0x587c1575
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x587c157d
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
