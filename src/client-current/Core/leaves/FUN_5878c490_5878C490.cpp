// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C490 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_5878c490_5878C490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F FF FF FF: call 0x5878c3f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 54: jle 0x5878c4fe
        __asm _emit 0x7e
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 FF FF FF: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [ecx + edx*4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 22: je 0x5878c4f0
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA FB FF FF: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B1 01 00 00: call 0x5878c6a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 17 AA CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xaa
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB A6: jmp 0x5878c4a4
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA FB FF FF: call 0x5878c0b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 91 4D D1 FF: call 0x584a12a0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x4d
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 FE FF FF: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC FE FF FF: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 37 BC CF FF: call 0x58488170
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xbc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F FE FF FF: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 FE FF FF: call 0x5878c410
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
