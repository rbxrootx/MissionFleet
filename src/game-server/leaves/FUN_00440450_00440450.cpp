// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440450 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_00440450_00440450() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aae9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 40 02 00 00: call 0x4406d0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x4404d0
        __asm _emit 0x74
        __asm _emit 0x3c
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 20 FF FF FF: call 0x4403c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 57 FE FF FF: call 0x440300
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x4404d0
        __asm _emit 0x75
        __asm _emit 0x1e
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 52 FF FF FF: call 0x440410
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 39 FE FF FF: call 0x440300
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x440514
        __asm _emit 0x74
        __asm _emit 0x44
        lea edx, [ebp + 10h]
        push edx
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 24 FE FF FF: call 0x440300
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x440504
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BD FD FF FF: call 0x4402b0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EE 01 00 00: call 0x4406f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4404d0
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x440595
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 8B 08 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 65 0C 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 2A 0A 00 00: call 0x440f60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 52 0C 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 04 78 5D 00: mov ecx, dword ptr [0x5d7804]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0ch], 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D8 0B 00 00: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F8 0B 00 00: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 44 FE FF FF: call 0x4403c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8E 8B 08 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 37 82 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
