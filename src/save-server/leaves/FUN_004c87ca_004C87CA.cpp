// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C87CA .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004c87ca_004C87CA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B9 1B 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        push 6748d0h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 6748c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 00 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 98 02 06 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 45 00 06 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A D5 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4c8869
        __asm _emit 0x7e
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3F EE 05 00: call 0x527659
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x4c8869
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 FC FF FF: call 0x4c8528
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 6748e0h
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        push 6748dch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 FF 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 69 01 06 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EB FF 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 64 02 06 00: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x4c881d
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 6748e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D5 FF 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
