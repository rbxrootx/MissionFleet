// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053DAFA .. +0xE4 bytes.
extern "C" __declspec(naked) void _Dump_CCmdTarget__UBEXAAVCDumpContext___Z_0053DAFA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B C8 F9 FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 34: je 0x53db4a
        __asm _emit 0x74
        __asm _emit 0x34
        push 6721f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 AD FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        push 67223ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 672224h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F AD FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 54 AF FE FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 AD FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 0D: je 0x53db60
        __asm _emit 0x74
        __asm _emit 0x0d
        push 672240h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB AC FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        cmp eax, 6355d0h
        ; Exact mapped bytes 74 66: je 0x53dbd8
        __asm _emit 0x74
        __asm _emit 0x66
        push 672268h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC AC FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 67227ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 AC FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 AE FE FF: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 672288h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9D AC FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F AF FE FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x53dbcb
        __asm _emit 0x74
        __asm _emit 0x0d
        push 67229ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 AC FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        push 6722bch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 AC FE FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
