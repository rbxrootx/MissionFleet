// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00589275 .. +0x35 bytes.
extern "C" __declspec(naked) void _AfxPostQuitMessage__YGXH_Z_00589275() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 DB F5 F4 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x58929a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 0A: je 0x58929a
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 58: call dword ptr [ecx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 C0 BF 68 00: call dword ptr [0x68bfc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
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
