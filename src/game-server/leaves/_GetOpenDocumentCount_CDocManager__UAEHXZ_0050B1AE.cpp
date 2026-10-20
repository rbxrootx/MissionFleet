// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B1AE .. +0x73 bytes.
extern "C" __declspec(naked) void _GetOpenDocumentCount_CDocManager__UAEHXZ_0050B1AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 C5 7A 02 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x50b21a
        __asm _emit 0x74
        __asm _emit 0x48
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 CF 7A 02 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x50b218
        __asm _emit 0x74
        __asm _emit 0x1e
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x50b216
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB DC: jmp 0x50b1f4
        __asm _emit 0xeb
        __asm _emit 0xdc
        ; Exact mapped bytes EB B2: jmp 0x50b1cc
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
