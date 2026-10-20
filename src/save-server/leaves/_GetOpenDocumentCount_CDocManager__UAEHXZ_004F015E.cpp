// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F015E .. +0x73 bytes.
extern "C" __declspec(naked) void _GetOpenDocumentCount_CDocManager__UAEHXZ_004F015E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 DE 68 03 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 48: je 0x4f01ca
        __asm _emit 0x74
        __asm _emit 0x48
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 E8 68 03 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x03
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
        ; Exact mapped bytes 74 1E: je 0x4f01c8
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
        ; Exact mapped bytes 74 09: je 0x4f01c6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB DC: jmp 0x4f01a4
        __asm _emit 0xeb
        __asm _emit 0xdc
        ; Exact mapped bytes EB B2: jmp 0x4f017c
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
