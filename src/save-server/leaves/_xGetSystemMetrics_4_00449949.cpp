// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449949 .. +0x63 bytes.
extern "C" __declspec(naked) void _xGetSystemMetrics_4_00449949() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 AE FE FF FF: call 0x449800
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x449962
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 18 6A 68 00: call dword ptr [0x686a18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x4499a6
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, 4ch
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 77 25: ja 0x44999c
        __asm _emit 0x77
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 85 AC 99 44 00: jmp dword ptr [eax*4 + 0x4499ac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x99
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 1E: jmp 0x4499a6
        __asm _emit 0xeb
        __asm _emit 0x1e
        xor eax, eax
        ; Exact mapped bytes EB 1A: jmp 0x4499a6
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov dword ptr [ebp + 8], 0
        ; Exact mapped bytes EB 07: jmp 0x44999c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
