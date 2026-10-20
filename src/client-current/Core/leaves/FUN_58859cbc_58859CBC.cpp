// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859CBC .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58859cbc_58859CBC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 15: jne 0x58859cdd
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 A2 87 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 D3 72 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop eax
        pop ebp
        ret
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x58859ce9
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [ecx + 4]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58859cf2
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x58859cfe
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [ecx + 8]
        mov dword ptr [edx], eax
        xor eax, eax
        pop ebp
        ret
    }
}
