// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005428B0 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_005428b0_005428B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        shl eax, 8
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        and ecx, 0ffh
        add eax, ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 54h], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 80000000h
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 58h], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        xor eax, eax
        cmp edx, 4
        setge al
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, 1
        sub eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5ch], 0
        ; Exact mapped bytes 74 16: je 0x542961
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes FF 15 80 B9 68 00: call dword ptr [0x68b980]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 40000h
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 68h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A 9A F9 FF: call 0x4dc3a3
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 99 F9 FF: call 0x4dc2f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xff
        push 7f02h
        push 0
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 3ch], eax
        push 7f00h
        push 0
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 40h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 75 11: jne 0x5429bb
        __asm _emit 0x75
        __asm _emit 0x11
        push 53h
        push 6768bch
        ; Exact mapped bytes E8 8A 63 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5429bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5429a1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 40h], 0
        ; Exact mapped bytes 75 11: jne 0x5429db
        __asm _emit 0x75
        __asm _emit 0x11
        push 54h
        push 6768bch
        ; Exact mapped bytes E8 6A 63 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5429db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5429c1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 44h], 0
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 5ch], 0
        setne al
        inc eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 5ch], 0
        setne al
        inc eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 44h], 0
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
