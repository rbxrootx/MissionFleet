// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004205DA .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_004205da_004205DA() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub eax, 3a4h
        ; Exact mapped bytes 74 22: je 0x420607
        __asm _emit 0x74
        __asm _emit 0x22
        sub eax, 4
        ; Exact mapped bytes 74 17: je 0x420601
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 0dh
        ; Exact mapped bytes 74 0C: je 0x4205fb
        __asm _emit 0x74
        __asm _emit 0x0c
        dec eax
        ; Exact mapped bytes 74 03: je 0x4205f5
        __asm _emit 0x74
        __asm _emit 0x03
        xor eax, eax
        ret
        mov eax, 404h
        ret
        mov eax, 412h
        ret
        mov eax, 804h
        ret
        mov eax, 411h
        ret
    }
}
