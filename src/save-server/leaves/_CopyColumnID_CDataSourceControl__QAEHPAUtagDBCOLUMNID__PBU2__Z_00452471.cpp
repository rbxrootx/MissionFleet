// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00452471 .. +0xC9 bytes.
extern "C" __declspec(naked) void _CopyColumnID_CDataSourceControl__QAEHPAUtagDBCOLUMNID__PBU2__Z_00452471() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [eax + 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3B: je 0x4524d0
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 0B: je 0x4524a6
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 4B: je 0x4524ec
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x45252f
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 14h], edx
        ; Exact mapped bytes EB 5F: jmp 0x45252f
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 14h]
        push edx
        ; Exact mapped bytes E8 88 6B 01 00: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        lea eax, [eax + eax + 2]
        push eax
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 75 04: jne 0x452519
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x452534
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes E8 04 B7 01 00: call 0x46dc30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
