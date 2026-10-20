// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567F43 .. +0x76 bytes.
extern "C" __declspec(naked) void _HandleInComingCall_XMessageFilter_COleMessageFilter__UAGKKPAUHTASK____KPAUtagINTERFACEINFO___Z_00567F43() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 42: jne 0x567f9d
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 06: je 0x567f67
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 32: jne 0x567f99
        __asm _emit 0x75
        __asm _emit 0x32
        push 0
        push 36ah
        push 36ah
        push 0
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x567f99
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0
        push 36ah
        ; Exact mapped bytes FF 15 94 23 5E 00: call dword ptr [0x5e2394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 6C 26 5E 00: call dword ptr [0x5e266c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 16: jmp 0x567fb3
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 06: je 0x567fa9
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 08: jne 0x567fb1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 02: jmp 0x567fb3
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
