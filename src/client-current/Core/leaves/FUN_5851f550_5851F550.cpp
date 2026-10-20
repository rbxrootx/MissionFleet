// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F550 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_5851f550_5851F550() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881667h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 24: je 0x5851f5a9
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a4230h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 70h
        ; Exact mapped bytes E8 E7 68 FE FF: call 0x58505e80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        push edx
        ; Exact mapped bytes E8 F7 7C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 69 FE FF: call 0x58505fa0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx], 588a422ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        sub eax, 70h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 1D FF FF FF: call 0x5851f520
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 10h]
        add eax, 10h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        or edx, 1
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F9 15 00 00: call 0x58520c20
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5851f646
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 2
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EB CC FE FF: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
