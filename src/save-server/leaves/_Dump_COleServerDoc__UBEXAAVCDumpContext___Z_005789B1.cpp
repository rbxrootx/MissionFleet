// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005789B1 .. +0x11A bytes.
extern "C" __declspec(naked) void _Dump_COleServerDoc__UBEXAAVCDumpContext___Z_005789B1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 92 4F FF FF: call 0x56d956
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C D3 FA FF: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 72: je 0x578a42
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 20: je 0x5789fc
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        push eax
        push 67ce14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 FE FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 00 FB FF: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x578a09
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67ce2ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 FE FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c4h], 0
        ; Exact mapped bytes 74 20: je 0x578a35
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c4h]
        push eax
        push 67ce48h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F FE FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 00 FB FF: call 0x528acb
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x578a42
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 67ce60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 FE FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        push edx
        push 67ce7ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 FD FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 00 FB FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 0b0h
        push eax
        push 67ce90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D5 FD FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 09 40 F5 FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x40
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        push edx
        push 67cea4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 FD FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD FF FA FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c8h]
        push ecx
        push 67ceb8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A FD FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB FF FA FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0xff
        push 67cecch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 FD FA FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
