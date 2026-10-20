// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426661 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_00426661_00426661() {
    __asm {
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 70 FF 44 00: cmp dword ptr [0x44ff70], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 75 42: jne 0x4266b0
        __asm _emit 0x75
        __asm _emit 0x42
        push 4401b4h
        ; Exact mapped bytes FF 15 E0 C1 43 00: call dword ptr [0x43c1e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 74 67: je 0x4266e6
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes 8B 35 FC C1 43 00: mov esi, dword ptr [0x43c1fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 4401a8h
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes A3 70 FF 44 00: mov dword ptr [0x44ff70], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 50: je 0x4266e6
        __asm _emit 0x74
        __asm _emit 0x50
        push 440198h
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 440184h
        push edi
        ; Exact mapped bytes A3 74 FF 44 00: mov dword ptr [0x44ff74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes A3 78 FF 44 00: mov dword ptr [0x44ff78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes A1 74 FF 44 00: mov eax, dword ptr [0x44ff74]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4266cf
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 0E: je 0x4266cf
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes A1 78 FF 44 00: mov eax, dword ptr [0x44ff78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4266cf
        __asm _emit 0x74
        __asm _emit 0x05
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, eax
        push dword ptr [esp + 18h]
        push dword ptr [esp + 18h]
        push dword ptr [esp + 18h]
        push ebx
        ; Exact mapped bytes FF 15 70 FF 44 00: call dword ptr [0x44ff70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        xor eax, eax
        ; Exact mapped bytes EB F8: jmp 0x4266e2
        __asm _emit 0xeb
        __asm _emit 0xf8
    }
}
