// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58588D50 .. +0x3F5 bytes.
extern "C" __declspec(naked) void FUN_58588d50_58588D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 DA 03 00 00: jne 0x5858913d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes 75 4D: jne 0x58588dbb
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 37 CA F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58588db6
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 28 CA F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 77 27: ja 0x58588db6
        __asm _emit 0x77
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 0D CA F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xff
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DB 23 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 82 03 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 75 41: jne 0x58588e0a
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 DC C9 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588e05
        __asm _emit 0x73
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 C1 C9 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        imul eax, eax, 0ah
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8C 23 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 33 03 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 75 41: jne 0x58588e59
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 8D C9 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588e54
        __asm _emit 0x73
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 72 C9 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        imul edx, eax, 0ah
        add edx, 2
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3D 23 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 75 41: jne 0x58588ea8
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 3E C9 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588ea3
        __asm _emit 0x73
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 23 C9 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xc9
        __asm _emit 0xf0
        __asm _emit 0xff
        imul ecx, eax, 0ah
        add ecx, 3
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EE 22 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 95 02 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes 75 41: jne 0x58588ef7
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 EF C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588ef2
        __asm _emit 0x73
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 D4 C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        imul eax, eax, 0ah
        add eax, 4
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9F 22 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 46 02 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 90h]
        ; Exact mapped bytes 75 41: jne 0x58588f46
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 A0 C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588f41
        __asm _emit 0x73
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 85 C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        imul edx, eax, 0ah
        add edx, 5
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 50 22 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F7 01 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 75 41: jne 0x58588f95
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 51 C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588f90
        __asm _emit 0x73
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 36 C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        imul ecx, eax, 0ah
        add ecx, 6
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 01 22 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 75 41: jne 0x58588fe4
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 02 C8 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x58588fdf
        __asm _emit 0x73
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 E7 C7 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0xff
        imul eax, eax, 0ah
        add eax, 7
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B2 21 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x21
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 75 41: jne 0x58589033
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 B3 C7 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x5858902e
        __asm _emit 0x73
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 98 C7 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0xff
        imul edx, eax, 0ah
        add edx, 8
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 63 21 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x21
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 75 41: jne 0x58589082
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 64 C7 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 0bebc200h
        ; Exact mapped bytes 73 2A: jae 0x5858907d
        __asm _emit 0x73
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 49 C7 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0xff
        imul ecx, eax, 0ah
        add ecx, 9
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 14 21 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x21
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes 75 19: jne 0x585890a9
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 ED 20 23 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x20
        __asm _emit 0x23
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x5858913d
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes 75 10: jne 0x585890c7
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 76: jmp 0x5858913d
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes 75 68: jne 0x5858913d
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 4E: je 0x5858912f
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 C4 C6 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc6
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7C 3F: jl 0x5858912f
        __asm _emit 0x7c
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 98 C6 F0 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc6
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        push 0f235h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
