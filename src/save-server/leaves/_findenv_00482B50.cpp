// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482B50 .. +0x7C bytes.
extern "C" __declspec(naked) void _findenv_00482B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 54 72 68 00: mov eax, dword ptr [0x687254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x482b67
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 4B: je 0x482bba
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FE EB FF FF: call 0x481780
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x482bb8
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 0C 02: movsx ecx, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x02
        cmp ecx, 3dh
        ; Exact mapped bytes 74 10: je 0x482baa
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x482bb8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 2B 05 54 72 68 00: sub eax, dword ptr [0x687254]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        sar eax, 2
        ; Exact mapped bytes EB 10: jmp 0x482bc8
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB A4: jmp 0x482b5e
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 2B 05 54 72 68 00: sub eax, dword ptr [0x687254]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        sar eax, 2
        neg eax
        mov esp, ebp
        pop ebp
        ret
    }
}
