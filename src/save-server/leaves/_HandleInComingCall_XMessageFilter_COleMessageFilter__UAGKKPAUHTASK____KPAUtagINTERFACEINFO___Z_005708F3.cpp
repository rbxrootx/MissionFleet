// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005708F3 .. +0x76 bytes.
extern "C" __declspec(naked) void _HandleInComingCall_XMessageFilter_COleMessageFilter__UAGKKPAUHTASK____KPAUtagINTERFACEINFO___Z_005708F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 42: jne 0x57094d
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 06: je 0x570917
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 32: jne 0x570949
        __asm _emit 0x75
        __asm _emit 0x32
        push 0
        push 36ah
        push 36ah
        push 0
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 88 BE 68 00: call dword ptr [0x68be88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x570949
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 36ah
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D0 BF 68 00: call dword ptr [0x68bfd0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 16: jmp 0x570963
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 06: je 0x570959
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 08: jne 0x570961
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 02: jmp 0x570963
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
