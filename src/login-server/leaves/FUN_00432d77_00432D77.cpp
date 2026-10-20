// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432D77 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00432d77_00432D77() {
    __asm {
        mov eax, 43ac24h
        ; Exact mapped bytes E8 87 C8 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        mov dword ptr [ebp - 10h], esp
        mov esi, ecx
        ; Exact mapped bytes 75 13: jne 0x432da5
        __asm _emit 0x75
        __asm _emit 0x13
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        lea ecx, [esi + 4]
        ; Exact mapped bytes E8 CB A9 FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 E2: jne 0x432d94
        __asm _emit 0x75
        __asm _emit 0xe2
        lea ecx, [esi + 20h]
        push edi
        ; Exact mapped bytes E8 BE A9 FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x432dd2
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 40h]
        mov dword ptr [ecx + eax], edi
        add ecx, eax
        cmp dword ptr [esi + 44h], 2
        ; Exact mapped bytes 75 C7: jne 0x432d94
        __asm _emit 0x75
        __asm _emit 0xc7
        mov dword ptr [ecx + 4], edi
        ; Exact mapped bytes EB C2: jmp 0x432d94
        __asm _emit 0xeb
        __asm _emit 0xc2
        push 434aabh
        ; Exact mapped bytes E8 FE AA FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3ch]
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E8 D4 F9 FF FF: call 0x4327bf
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 75 05: jne 0x432df6
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 2B 9F FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        lea ecx, [esi + 20h]
        ; Exact mapped bytes E8 CF A9 FF FF: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 8]
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [eax], ebx
        ; Exact mapped bytes E8 CD AA FF FF: call 0x42d8da
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 40h]
        mov dword ptr [eax + ebx], edi
        add eax, ebx
        cmp dword ptr [esi + 44h], 2
        ; Exact mapped bytes 75 03: jne 0x432e1e
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [eax + 4], edi
        mov eax, ebx
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x432d94
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
